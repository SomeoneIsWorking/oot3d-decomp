// OoT3D decomp @ 004188a8  name=FUN_004188a8  size=100

void FUN_004188a8(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  puVar2 = (undefined4 *)FUN_00313ce0(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_0041b6b4();
    *puVar2 = uVar3;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
  }
  puVar1 = DAT_0041890c;
  *(undefined4 **)(DAT_0041890c + 0x14) = puVar2;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0;
  return;
}
