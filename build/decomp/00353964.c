// OoT3D decomp @ 00353964  name=FUN_00353964  size=52

undefined4
FUN_00353964(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  bool bVar1;
  bool bVar2;

  bVar1 = param_1 == param_5;
  bVar2 = param_5 <= param_1;
  if (!bVar2 || bVar1) {
    bVar1 = param_5 == param_2;
    bVar2 = param_2 <= param_5;
  }
  if (!bVar2 || bVar1) {
    bVar1 = param_3 == param_6;
    bVar2 = param_6 <= param_3;
  }
  if (!bVar2 || bVar1) {
    bVar1 = param_6 == param_4;
    bVar2 = param_4 <= param_6;
  }
  if (bVar2 && !bVar1) {
    return 0;
  }
  return 1;
}
