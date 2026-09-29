// OoT3D decomp @ 002e0f90  name=FUN_002e0f90  size=392

void FUN_002e0f90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  undefined8 uVar3;

  if (*(char *)((int)param_1 + 0x11d) != '\0') {
    if (*(char *)((int)param_1 + 0x11d) == '\x01') {
      iVar1 = FUN_0031b9c0(*param_1,1);
      if (iVar1 != 0) {
        FUN_00303ea8(*param_1);
        FUN_0034fc6c();
      }
      FUN_0031b99c(*param_1);
      *param_1 = 0;
      param_2 = extraout_r1;
    }
    if (((*DAT_002e1118 & 1) == 0) &&
       (uVar3 = FUN_003679b4(DAT_002e1118), param_2 = (int)((ulonglong)uVar3 >> 0x20),
       (int)uVar3 != 0)) {
      FUN_0036788c(DAT_002e111c);
      param_2 = DAT_002e1124;
    }
    FUN_0031025c(DAT_002e111c,param_2);
    iVar1 = 0;
    do {
      if ((int *)param_1[iVar1 + 0x42] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 + 0x42] + 4))();
      }
      iVar2 = iVar1 + 1;
      param_1[iVar1 + 0x42] = 0;
      iVar1 = iVar2;
    } while (iVar2 < 2);
    iVar1 = 0;
    do {
      if (*(char *)((int)param_1 + iVar1 + 0x19) != '\0') {
        FUN_002f70c4(param_1 + iVar1 * 0x1c + 7);
        *(undefined1 *)((int)param_1 + iVar1 + 0x19) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    FUN_0034fc6c(param_1[0x44]);
    param_1[0x41] = 0xffffffff;
    param_1[0x44] = 0;
    *(undefined1 *)((int)param_1 + 0x11a) = 0x8c;
    *(undefined1 *)((int)param_1 + 0x11b) = 0x8c;
    iVar1 = 0;
    do {
      if ((int *)param_1[iVar1 + 0x3f] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 + 0x3f] + 4))();
      }
      iVar2 = iVar1 + 1;
      param_1[iVar1 + 0x3f] = 0;
      iVar1 = iVar2;
    } while (iVar2 < 2);
    FUN_0034fc6c(param_1[1]);
    param_1[1] = 0;
    if (param_1[0x45] != 0) {
      (**(code **)(*(int *)*DAT_002e1128 + 0x10))((int *)*DAT_002e1128,param_1[0x45]);
    }
    param_1[0x45] = 0;
    *(undefined1 *)((int)param_1 + 0x11d) = 0;
  }
  return;
}
