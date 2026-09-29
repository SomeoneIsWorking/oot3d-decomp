// OoT3D decomp @ 001d7f20  name=FUN_001d7f20  size=96

void FUN_001d7f20(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;

  FUN_003478d0();
  sVar1 = *(short *)(param_1 + 0x1c);
  cVar3 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(DAT_001d7f80 + sVar1 * 0x30));
  *(char *)(param_1 + 0x1a8) = cVar3;
  uVar2 = DAT_001d7f84;
  if (cVar3 < '\0') {
    FUN_00374428(param_1);
  }
  else {
    *(short *)(param_1 + 0x1c) = sVar1;
    *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1fc) = DAT_001d7f88;
  return;
}
