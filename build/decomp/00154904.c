// OoT3D decomp @ 00154904  name=FUN_00154904  size=620

void FUN_00154904(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x870));
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x871)), iVar2 != 0)) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00154b70 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    *(undefined1 *)(param_1 + 0x19a) = 1;
    FUN_00372f38(param_1,param_2,param_1 + 0x8f8,0,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),1,
                 param_1 + 0x228,param_1 + 0x534,0xf);
    FUN_0035c358(param_1 + 0x8fc,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
    uVar3 = DAT_00154b74;
    *(undefined2 *)(param_1 + 0x86e) = 1;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    FUN_0037572c(DAT_00154b78,param_1);
    uVar3 = DAT_00154b84;
    FUN_00372d4c(DAT_00154b84,DAT_00154b7c,param_1 + 0xbc,DAT_00154b80);
    FUN_00353dd0(param_2,param_1 + 0x8a0);
    FUN_00353d24(param_2,param_1 + 0x8a0,param_1,DAT_00154b88);
    *(undefined1 *)(param_1 + 0x862) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 6;
    uVar1 = DAT_00154b90;
    *(undefined4 *)(param_1 + 0x140) = DAT_00154b8c;
    iVar2 = DAT_00154b9c;
    if (*(short *)(param_1 + 0x868) == 0) {
      if (((*(ushort *)(DAT_00154b98 + 8) & 0x1000) == 0) && (*(int *)(DAT_00154b9c + 4) != 0)) {
        uVar4 = FUN_0036ae14(param_1 + 0x1a4,3);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar1,uVar3,uVar4,uVar3,param_1 + 0x1a4,3,0);
      }
      else {
        uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar1,uVar3,uVar4,uVar3,param_1 + 0x1a4,1,0);
      }
      uVar3 = DAT_00154ba4;
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)(param_1 + 0x840) = DAT_00154ba0;
        return;
      }
    }
    else {
      if (*(short *)(param_1 + 0x868) != 1) {
        return;
      }
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,uVar3,uVar4,uVar3,param_1 + 0x1a4,1,0);
      uVar3 = DAT_00154b94;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar3;
  }
  return;
}
