// OoT3D decomp @ 002a95b0  name=FUN_002a95b0  size=380

/* WARNING: Possible PIC construction at 0x002a9618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x002a9630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x002a9654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002a9634) */
/* WARNING: Removing unreachable block (ram,0x002a961c) */
/* WARNING: Removing unreachable block (ram,0x002a9658) */

void FUN_002a95b0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == 0xd && *(char *)(param_4 + 0x1b0) == '\0') {
    iVar2 = param_4 + 0xc74;
    func_0x0035e3a4(iVar2,0,*(undefined1 *)(iRam002a967c + (uint)*(byte *)(iRam002a9678 + param_4)))
    ;
    iVar1 = func_0x003695f8();
    uVar3 = 0;
    do {
      if (*(char *)(iVar2 + uVar3) != '\0') {
        if (iVar1 != 0) {
          *(undefined1 *)(iVar2 + uVar3 * 0x98 + 0x15) = 1;
        }
        iVar4 = iVar2 + uVar3 * 0x98;
        func_0x00373bec(iVar4 + 4);
        if (iVar1 != 0) {
          *(undefined1 *)(iVar4 + 0x15) = 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    return;
  }
  if (*(char *)(param_4 + 0x1b0) != '\x01' || param_2 != 0xe) {
    return;
  }
  if ((*(uint *)(param_4 + 0xe54) & 0x40000) == 0) {
    func_0x0036932c();
    iVar1 = *(int *)(*(int *)(param_4 + 0x1ec) + 0x14);
    if (2 < *(int *)(iVar1 + 0x68)) {
      *(undefined1 *)(*(int *)(iVar1 + 0x6c) + 2) = 0;
    }
    return;
  }
  iVar1 = *(int *)(*(int *)(param_4 + 0x1ec) + 0x14);
  if (0 < *(int *)(iVar1 + 0x68)) {
    **(undefined1 **)(iVar1 + 0x6c) = 1;
  }
  return;
}

