// OoT3D decomp @ 002bd7d4  name=FUN_002bd7d4  size=240

undefined4 FUN_002bd7d4(byte *param_1,uint *param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;

  if (*param_3 == param_4) {
    return 0;
  }
  bVar1 = *param_1;
  iVar2 = *param_3 + 1;
  *param_3 = iVar2;
  if ((bVar1 & 0x80) == 0) {
    *param_2 = (uint)bVar1;
  }
  else {
    if (iVar2 == param_4) {
      return 0;
    }
    *param_2 = ((uint)bVar1 << 0x19) >> 0x12;
    bVar1 = param_1[1];
    uVar3 = (uint)bVar1;
    iVar2 = *param_3;
    *param_3 = iVar2 + 1;
    if ((bVar1 & 0x80) != 0) {
      if (iVar2 + 1 == param_4) {
        return 0;
      }
      *param_2 = (uVar3 & 0x7f | *param_2) << 7;
      bVar1 = param_1[2];
      uVar3 = (uint)bVar1;
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      if ((bVar1 & 0x80) != 0) {
        if (iVar2 + 1 == param_4) {
          return 0;
        }
        uVar3 = (uVar3 & 0x7f | *param_2) << 7;
        *param_2 = uVar3;
        *param_2 = uVar3 | param_1[3];
        *param_3 = *param_3 + 1;
        return 1;
      }
    }
    *param_2 = uVar3 | *param_2;
  }
  return 1;
}
