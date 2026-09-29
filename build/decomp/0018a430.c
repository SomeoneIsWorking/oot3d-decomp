// OoT3D decomp @ 0018a430  name=FUN_0018a430  size=452

void FUN_0018a430(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  if (-1 < *(short *)(param_1 + 0x1c)) {
    if ((*(short *)(param_1 + 0x1c) == 6) && (*(int *)(DAT_0018a5f4 + 4) != 0)) {
      *(undefined2 *)(param_1 + 0x1c) = 3;
    }
    FUN_003510b0(param_1,DAT_0018a5f8);
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0018a5fc + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    if (((*DAT_0018a600 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0018a600), iVar3 != 0)) {
      FUN_0036788c(DAT_0018a604);
    }
    uVar4 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x210,uVar4);
    FUN_00353dd0(param_2,param_1 + 0x1a8);
    FUN_0034fb3c(param_2,param_1 + 0x1a8,param_1,DAT_0018a614);
    uVar4 = DAT_0018a620;
    FUN_00372d4c(DAT_0018a620,DAT_0018a618,param_1 + 0xbc,DAT_0018a61c);
    uVar1 = DAT_0018a62c;
    *(undefined2 *)(DAT_0018a628 + param_1) =
         *(undefined2 *)(DAT_0018a624 + *(short *)(param_1 + 0x1c) * 2);
    FUN_0037572c(uVar1,param_1);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    uVar1 = DAT_0018a630;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined1 *)(param_1 + 0x203) = 1;
    *(undefined1 *)(param_1 + 0x204) = 1;
    *(undefined1 *)(param_1 + 0x205) = 0;
    *(undefined4 *)(param_1 + 0x208) =
         *(undefined4 *)(DAT_0018a634 + *(short *)(param_1 + 0x1c) * 4);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0018a638;
    *(undefined1 *)(param_1 + 0x285) = 0;
    *(undefined1 *)(param_1 + 0x19a) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
