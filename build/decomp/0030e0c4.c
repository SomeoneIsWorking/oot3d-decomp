// OoT3D decomp @ 0030e0c4  name=FUN_0030e0c4  size=284

void FUN_0030e0c4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined1 auStack_18 [4];

  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    local_1c = *(undefined4 *)(param_1 + 0x18);
    uVar2 = FUN_0030dbd4(auStack_18,&local_1c,1,0,0xffffffff,0xffffffff);
    uVar3 = uVar2 >> 0x1b;
    if ((uVar2 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_00310148(param_1 + 0x44);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    local_1c = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0030dbd4(auStack_18,&local_1c,1,0,0xffffffff,0xffffffff);
    uVar3 = uVar2 >> 0x1b;
    if ((uVar2 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(param_1 + 0x10) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = DAT_0030e1e0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined1 *)(iVar1 + 0x348) = 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}
