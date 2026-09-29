// OoT3D decomp @ 002f0618  name=FUN_002f0618  size=132

void FUN_002f0618(void)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined8 uVar2;

  *(undefined4 *)(DAT_002f069c + 0x38) = 0;
  FUN_002f74a4(6);
  FUN_002d2b84();
  uVar1 = extraout_r1;
  if (((*DAT_002f06a0 & 1) == 0) &&
     (uVar2 = FUN_003679b4(DAT_002f06a0), uVar1 = (int)((ulonglong)uVar2 >> 0x20), (int)uVar2 != 0))
  {
    FUN_0036788c(DAT_002f06a4);
    uVar1 = DAT_002f06ac;
  }
  FUN_002e9a1c(DAT_002f06b0,uVar1);
  FUN_0044c648();
  FUN_002e666c((int)*(short *)(*DAT_002f06b4 + 0xf50));
  return;
}
