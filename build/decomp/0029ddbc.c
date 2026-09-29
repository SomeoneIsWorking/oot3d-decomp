// OoT3D decomp @ 0029ddbc  name=FUN_0029ddbc  size=444

void FUN_0029ddbc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [48];

  FUN_00372224(auStack_48,param_1 + 0x148);
  uVar3 = DAT_0029df78;
  iVar2 = FUN_003695f8();
  iVar1 = DAT_0029df80;
  if (iVar2 != 0) {
    uVar3 = DAT_0029df7c;
  }
  *(undefined4 *)(param_2 + 0x7f80) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0xc) + 8)
  ;
  *(undefined4 *)(param_2 + 0x7f84) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 8)
  ;
  if (*(int *)(iVar1 + 4) == 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_48);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x1d0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d0),auStack_48);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d0),0);
    }
    if (*(int *)(iVar1 + 4) == 0) {
      if (*(short *)(param_1 + 0x1c) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),auStack_48);
        FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0xc) + 0xc) = uVar3;
      *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_48);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
      return;
    }
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0xc) + 0xc) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c0),auStack_48);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
    return;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0xc) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_48);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  return;
}
