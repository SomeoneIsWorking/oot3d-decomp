// OoT3D decomp @ 002e68ac  name=FUN_002e68ac  size=228

void FUN_002e68ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = param_1 + iVar3 * 0x400 + iVar1 * 4;
      if (*(int *)(iVar2 + 0x418) != 0) {
        FUN_00305224();
        if (*(undefined4 **)(iVar2 + 0x418) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar2 + 0x418))();
        }
        *(undefined4 *)(iVar2 + 0x418) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x100);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    iVar1 = param_1 + iVar3 * 4;
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_002df800();
      if (*(undefined4 **)(iVar1 + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar1 + 0x18))();
      }
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  FUN_00305364(param_1 + 0xc24);
  FUN_003445a8(param_1 + 0xde8);
  FUN_002fbb10(param_1 + 0xc18);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xe3c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
