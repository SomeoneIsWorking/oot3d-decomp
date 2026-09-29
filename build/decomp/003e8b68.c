// OoT3D decomp @ 003e8b68  name=FUN_003e8b68  size=248

void FUN_003e8b68(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;

  uVar2 = DAT_003e8c6c;
  iVar1 = DAT_003e8c60;
  iVar6 = *(int *)(param_1 + 0x128);
  if (*(int *)(DAT_003e8c60 + 0x4e8) < 4) {
    uVar4 = *(uint *)(DAT_003e8c60 + -0xf44);
    uVar5 = *(uint *)(DAT_003e8c64 + 0x48);
    bVar7 = (uVar5 & uVar4) != 0;
    if (bVar7) {
      uVar5 = *(uint *)(DAT_003e8c64 + 0x4c);
    }
    bVar8 = (uVar5 & uVar4) != 0;
    uVar5 = DAT_003e8c64;
    if (bVar7 && bVar8) {
      uVar5 = *(uint *)(DAT_003e8c64 + 0x50);
    }
    if (((bVar7 && bVar8) && (uVar4 & uVar5) != 0) && ((*(ushort *)(DAT_003e8c68 + 0xfc) & 1) == 0))
    {
      return;
    }
  }
  if (*(short *)(param_1 + 0xbc) != 0) {
    iVar3 = FUN_0035a3c4(param_2,0);
    if ((iVar3 != 0) || ((*(int *)(iVar1 + 0x4e8) < 4 && (*(int *)(iVar1 + -0xff0) == 0)))) {
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(undefined2 *)(param_1 + 0x1f8) = 0;
      *(undefined2 *)(iVar6 + 0x1f8) = 0;
      return;
    }
    if (*(short *)(param_1 + 0xbc) != 0) {
      return;
    }
  }
  if (*(int *)(iVar1 + 0x4e8) < 4) {
    bVar7 = *(int *)(iVar1 + -0xffc) != 0;
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(iVar1 + -0xff0);
    }
    if (bVar7 && iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(undefined2 *)(param_1 + 0x1f8) = 0xc000;
      *(short *)(iVar6 + 0x1f8) = (short)DAT_003e8c70;
      return;
    }
  }
  return;
}
