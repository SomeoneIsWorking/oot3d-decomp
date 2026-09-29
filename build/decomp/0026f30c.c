// OoT3D decomp @ 0026f30c  name=FUN_0026f30c  size=84

undefined4 FUN_0026f30c(int param_1,int param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;

  if ((*(char *)(param_2 + 2) == '\n') &&
     (pcVar3 = (char *)(*(int *)(param_1 + 0x5b8c) +
                       (uint)(*(ushort *)(param_2 + 0x1c) >> 10) * 0x10), cVar1 = *pcVar3,
     pcVar3[2] != cVar1)) {
    sVar2 = *(short *)(param_2 + 0xbe);
    if (*(char *)(param_2 + 3) != cVar1) {
      sVar2 = sVar2 + -0x8000;
    }
    *param_3 = sVar2;
    return 1;
  }
  return 0;
}
