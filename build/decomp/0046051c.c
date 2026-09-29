// OoT3D decomp @ 0046051c  name=FUN_0046051c  size=72

void FUN_0046051c(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_00460524;
  *(undefined4 *)(DAT_00460524[2] + 8) = 0xffffffff;
  if (puVar1[2] != 0) {
    FUN_003525d4();
  }
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  return;
}
