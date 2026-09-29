// OoT3D decomp @ 00267cf0  name=FUN_00267cf0  size=196

void FUN_00267cf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_00267db4;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_00267db8;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    local_50 = *DAT_00267dbc;
    uStack_4c = DAT_00267dbc[1];
    uStack_48 = DAT_00267dbc[2];
    local_44 = *(undefined4 *)(param_1 + 0x1b0);
    FUN_00358778(*(undefined4 *)(param_1 + 0x1cc),0,4,&local_50,2);
    FUN_00358778(*(undefined4 *)(param_1 + 0x1cc),1,4,&local_50,2);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  return;
}
