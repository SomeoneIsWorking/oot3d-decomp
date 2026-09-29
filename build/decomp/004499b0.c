// OoT3D decomp @ 004499b0  name=FUN_004499b0  size=92

void FUN_004499b0(void)

{
  undefined4 *puVar1;

  FUN_002e244c();
  puVar1 = DAT_00449a0c;
  *DAT_00449a0c = 0xbb;
  puVar1[1] = 1;
  *(short *)(puVar1 + 3) = (short)DAT_00449a10;
  puVar1[2] = DAT_00449a14;
  *(undefined1 *)(puVar1 + 0xc) = 0x5a;
  *(undefined1 *)((int)puVar1 + 0x31) = 0x45;
  *(undefined1 *)((int)puVar1 + 0x32) = 0x4c;
  *(undefined1 *)((int)puVar1 + 0x33) = 0x44;
  *(undefined1 *)(puVar1 + 0xd) = 0x41;
  *(undefined1 *)((int)puVar1 + 0x35) = 0x5a;
  return;
}
