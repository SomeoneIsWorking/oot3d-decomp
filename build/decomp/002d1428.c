// OoT3D decomp @ 002d1428  name=FUN_002d1428  size=132

undefined4 FUN_002d1428(double *param_1,int param_2)

{
  uint uVar1;
  double in_d0;
  double dVar2;

  uVar1 = param_2 - 1;
  dVar2 = param_1[uVar1];
  while ((uVar1 & 0xfffffff9) != 0) {
    uVar1 = uVar1 - 1;
    dVar2 = param_1[uVar1] + dVar2 * in_d0;
  }
  if (uVar1 != 2) {
    if (uVar1 != 4) {
      if (uVar1 != 6) {
        return SUB84(dVar2,0);
      }
      dVar2 = param_1[4] + (param_1[5] + dVar2 * in_d0) * in_d0;
    }
    dVar2 = param_1[2] + (param_1[3] + dVar2 * in_d0) * in_d0;
  }
  return SUB84(*param_1 + (param_1[1] + dVar2 * in_d0) * in_d0,0);
}
