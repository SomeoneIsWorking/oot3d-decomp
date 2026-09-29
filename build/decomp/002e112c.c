// OoT3D decomp @ 002e112c  name=FUN_002e112c  size=116

void FUN_002e112c(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  cVar1 = *(char *)(param_1 + 0x11d);
  if (cVar1 != '\0') {
    if ((cVar1 == '\x01') || ((cVar1 == '\x02' && (*(char *)(param_1 + 0x11a) != param_2)))) {
      *(char *)(param_1 + 0x11b) = param_2;
    }
    return;
  }
  FUN_002e0f90(param_1);
  iVar2 = (**(code **)(*(int *)*DAT_002e11a0 + 8))((int *)*DAT_002e11a0,0x234);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00347258();
  }
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined1 *)(param_1 + 0x11d) = 2;
  return;
}
