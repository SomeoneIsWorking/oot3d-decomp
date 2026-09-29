// OoT3D decomp @ 0016e678  name=FUN_0016e678  size=376

void FUN_0016e678(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;

  if (*(char *)(param_1 + 0x5c74) == '\0') {
    if ((*(char *)(param_2 + 0x12bc) == '1') && (iVar1 = FUN_0037571c(param_1), iVar1 == 0)) {
      FUN_0036e980(param_1,0,7);
      return;
    }
    uVar2 = DAT_0034d610;
    uVar3 = *(uint *)(param_2 + 0x1710);
    bVar4 = (uVar3 & 0x8000000) != 0;
    if (bVar4) {
      uVar3 = (uint)*(byte *)(param_2 + 0x1a7);
    }
    if (bVar4 && uVar3 != 1) {
      *(undefined4 *)(param_2 + 0x70) = DAT_0034d610;
      if (*(char *)(param_2 + 0x2237) != '\0') {
        iVar1 = FUN_0036b4ec(param_2 + 0x254,param_1,0);
        if (iVar1 != 0) {
          if (*(char *)(param_2 + 0x2237) == '\x01') {
            FUN_00360190(DAT_0034d624,uVar2,uVar2,DAT_0034d620,param_2 + 0x254,param_1,0x34,0);
          }
          else {
            FUN_00359aa0(param_2 + 0x254,param_1,0x34);
          }
        }
        FUN_0034b17c(param_2);
        FUN_0034ad70(uVar2,param_2,param_2 + 0x221c,(int)*(short *)(param_2 + 0xbe));
        return;
      }
      iVar1 = FUN_00358bf4(param_1,param_2,0);
      if (iVar1 == 0) {
        FUN_0034b288(ABS(*(float *)(param_2 + 100)),param_1,param_2,0);
        FUN_00370378(param_2 + 0x175c,DAT_0034d618,800);
        FUN_0034ad70(DAT_0034d61c,param_2,param_2 + 100,(int)*(short *)(param_2 + 0x2220));
        return;
      }
      *(undefined1 *)(DAT_0034d614 + param_2) = 1;
      return;
    }
    FUN_0036b4ec(param_2 + 0x254,param_1);
    uVar3 = FUN_0034d4b0(param_2);
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = *(uint *)(param_2 + 0x1710);
    }
    if (!bVar4 || (uVar3 & 0x800) != 0) {
      FUN_0034cc78(param_2,param_1);
      return;
    }
  }
  else {
    FUN_0036b0fc(param_1,param_2);
    FUN_0036b02c(param_1,param_2);
    FUN_0036055c(param_1,param_2,DAT_0016e7f0,0);
    iVar1 = FUN_0034dd2c(param_2);
    if ((iVar1 == 0) || (iVar1 = FUN_00355a60(param_2), iVar1 != 0)) {
      FUN_0034d688(param_1,param_2,3);
    }
    *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x100000;
    uVar2 = FUN_0034d628(param_2);
    FUN_003604f0(param_2 + 0x254,param_1,uVar2);
    uVar2 = DAT_0016e7f4;
    *(undefined4 *)(param_2 + 0x6c) = DAT_0016e7f4;
    *(undefined4 *)(param_2 + 0x221c) = uVar2;
    *(undefined2 *)(param_2 + 0x4a) = *(undefined2 *)(param_2 + 0xbe);
    *(undefined2 *)(param_2 + 0x175a) = 0;
    *(undefined2 *)(param_2 + 0x1758) = 0;
    *(undefined2 *)(param_2 + 0x1756) = 0;
    *(undefined2 *)(param_2 + 0x1754) = 0;
    *(undefined2 *)(param_2 + 0x1752) = 0;
    *(undefined2 *)(param_2 + 0x1750) = 0;
    *(undefined2 *)(param_2 + 0x4c) = 0;
    *(undefined2 *)(param_2 + 0x48) = 0;
  }
  return;
}
