// OoT3D decomp @ 00477c70  name=FUN_00477c70  size=132

void FUN_00477c70(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;

  FUN_00484a08();
  puVar1 = DAT_00477ccc;
  *DAT_00477ccc = 0xff;
  puVar1[1] = 0xff;
  puVar1[2] = 0;
  puVar1[3] = 0xff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0xff;
  puVar1[7] = 0xff;
  puVar1[8] = 0;
  puVar1[-0x28] = 0;
  FUN_002cfce0(0);
  puVar2 = DAT_00483c78;
  if (((uint)DAT_00483c78 & 1) == 0) {
    *(undefined1 *)(DAT_00483c78 + 3) = 0;
  }
  else {
    puVar2 = (undefined2 *)((int)DAT_00483c78 + 1);
    *(undefined1 *)DAT_00483c78 = 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}
