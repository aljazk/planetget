#version 330 core
in vec2 TexCoord;
in vec3 Normal;
in vec3 FragPos;

out vec4 color;
vec3 lightColor = vec3(1.0f,1.0f,1.0f);
vec3 lightPos = vec3(50.0f, 50.0f, 50.0f);

uniform sampler2D ourTexture;

void main()
{
    float ambientStrength = 0.1f;
    vec3 ambient = ambientStrength * lightColor;
	
    // Diffuse
    //vec3 norm = normalize(vec3(1.0f, 1.0f, 1.0f));
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(lightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;
	
    vec3 result = (ambient + diffuse) * vec3(1.0f,1.0f,1.0f);
    color = vec4(result,1.0f) * texture(ourTexture, TexCoord);
}