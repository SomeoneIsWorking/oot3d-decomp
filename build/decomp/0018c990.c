// OoT3D decomp @ 0018c990  name=FUN_0018c990  size=456

void FUN_0018c990(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;

  uVar1 = DAT_0018cb60;
  FUN_00372d4c(DAT_0018cb60,DAT_0018cb58,param_1 + 0xbc,DAT_0018cb5c);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018cb64 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
  FUN_00353e78(iVar4 + 0x10,param_2,param_1 + 0x1a4,uVar5,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,0,0,0);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,0xffffffff);
  *(undefined2 *)(param_1 + 0x47a) = 1;
  FUN_00353dd0(param_2,param_1 + 0x3f8);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,DAT_0018cb68);
  uVar5 = FUN_0035011c(0x16);
  FUN_00350318(param_1 + 0xa0,uVar5,DAT_0018cb6c);
  puVar3 = DAT_0018cb84;
  uVar2 = DAT_0018cb80;
  uVar5 = DAT_0018cb7c;
  if ((*(int *)(DAT_0018cb70 + 4) != 1) && ((*(ushort *)(DAT_0018cb74 + 0xee) & 0x100) != 0)) {
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,*DAT_0018cb84);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar5,uVar1,uVar6,puVar3[3],param_1 + 0x1a4,*puVar3,*(undefined1 *)(puVar3 + 2));
    *(undefined4 *)(param_1 + 0x3f4) = uVar2;
    FUN_00376340(uVar1,uVar1,uVar1,param_2,param_1,4);
    FUN_0037572c(DAT_0018cb88,param_1);
    *(undefined2 *)(param_1 + 0x450) = 0;
    return;
  }
  FUN_00374428(param_1);
  return;
}
