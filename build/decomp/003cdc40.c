// OoT3D decomp @ 003cdc40  name=FUN_003cdc40  size=384

void FUN_003cdc40(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  FUN_003731e0(param_1 + 0x1a4);
  iVar4 = DAT_003cddc0;
  uVar5 = *(ushort *)(param_1 + 0x116) - 0x607d;
  if (uVar5 < 2) {
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar3 == 4) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
      iVar3 = FUN_00369f3c(param_2);
      uVar2 = DAT_003cddcc;
      uVar1 = DAT_003cddc8;
      if (iVar3 == 0) {
        FUN_0036be34(param_2,DAT_003cddcc);
        iVar3 = DAT_003cddd0;
        *(short *)(param_1 + 0x116) = (short)uVar2;
        *(ushort *)(iVar3 + 0x8c) = *(ushort *)(iVar3 + 0x8c) | 1;
      }
      else if (iVar3 == 1) {
        FUN_0036be34(param_2,DAT_003cddc8);
        *(short *)(param_1 + 0x116) = (short)uVar1;
      }
      if ((*(ushort *)(param_1 + 0x8b0) & 4) != 0) {
        *(ushort *)(param_1 + 0x8b0) = *(ushort *)(param_1 + 0x8b0) & 0xfffb;
        *(int *)(iVar4 + 0xee0) = *(int *)(iVar4 + 0xee0) + 1;
        return;
      }
    }
  }
  else if (uVar5 == 4) {
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar3 == 5) && (iVar3 = FUN_00346964(param_2), uVar1 = DAT_003cddc4, iVar3 != 0)) {
      *(ushort *)(param_1 + 0x8b0) = *(ushort *)(param_1 + 0x8b0) | 4;
      *(int *)(iVar4 + 0xee0) = *(int *)(iVar4 + 0xee0) + -1;
      FUN_0036be34(param_2,uVar1);
      *(short *)(param_1 + 0x116) = (short)uVar1;
    }
  }
  else {
    iVar4 = FUN_00369a48(param_1,param_2);
    uVar1 = DAT_003cddd4;
    if (iVar4 != 0) {
      if (*(short *)(param_1 + 0x116) == 0x607f) {
        FUN_00371e6c(0);
        *(undefined4 *)(param_1 + 0x840) = uVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x840) = DAT_003cddd4;
      }
      FUN_003539d8(param_1,param_2);
      return;
    }
  }
  return;
}
