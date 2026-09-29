// OoT3D decomp @ 00282e88  name=FUN_00282e88  size=196

void FUN_00282e88(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  (**(code **)(param_1 + 0x918))();
  if (*(int *)(param_1 + 0x918) != DAT_00282fa4) {
    *(short *)(param_1 + 0x922) = *(short *)(param_1 + 0x922) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x918);
  iVar2 = DAT_00282fa8;
  if (iVar3 != DAT_00282fa8) {
    iVar2 = DAT_00282fac;
  }
  if ((iVar3 == DAT_00282fa8 || iVar3 == iVar2) && (*(int *)(param_1 + 0x1e0) < DAT_00282fb0)) {
    cVar1 = (char)(int)(*(float *)(param_1 + 0x1e0) * DAT_00282fb4) + '7';
    *(char *)(param_1 + 0x92c) = cVar1;
    *(char *)(param_1 + 0x92b) = cVar1;
    *(char *)(param_1 + 0x92a) = cVar1;
    uVar4 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1e0) * DAT_00282fb8,3);
    *(char *)(param_1 + 0x92d) = (char)uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
