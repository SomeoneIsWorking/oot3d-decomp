// OoT3D decomp @ 00363c10  name=FUN_00363c10  size=168

uint FUN_00363c10(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1;
  uVar2 = 0;
  uVar1 = uVar4;
  if (uVar4 != 0) {
    uVar1 = uVar4 & 1;
  }
  if (uVar1 != 0) {
    do {
      iVar3 = (int)*(short *)(param_1 + uVar2 * 0x80 + 4);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 == param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar1);
  }
  if (uVar1 < uVar4) {
    do {
      iVar3 = (int)*(short *)(param_1 + uVar1 * 0x80 + 4);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 == param_2) {
        return uVar1;
      }
      iVar3 = (int)*(short *)(param_1 + uVar1 * 0x80 + 0x84);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 == param_2) {
        return uVar1 + 1;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar4);
  }
  return 0xffffffff;
}

