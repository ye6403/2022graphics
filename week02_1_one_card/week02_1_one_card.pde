void setup(){
  size(500,500);
}
int W=25;
void draw(){
  drawCard(100,100);
  drawCard(130,130);
  drawCard(160,160);
}
void drawCard(int x, int y){
  fill(255);
  rect(x-W/2,x-W/2,150+W,250+W,20);
  fill(#FF00F2);
  rect(x,y,150,250,20);
}
