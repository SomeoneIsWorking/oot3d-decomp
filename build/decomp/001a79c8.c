// OoT3D decomp @ 001a79c8  name=FUN_001a79c8  size=232

void FUN_001a79c8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r6;
  bool in_ZR;
  undefined4 unaff_s16;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r4 + 0xfe8) = param_1;
  if (((*puRam001a71c4 & 1) == 0) && (iVar4 = func_0x003679b4(puRam001a71c4), iVar4 != 0)) {
    func_0x0036788c(uRam001a71c8);
  }
  iVar4 = func_0x0034897c(*(undefined4 *)(iRam001a7b50 + 0x47c),*(undefined4 *)(unaff_r4 + 0xfe4),
                          *(undefined4 *)(unaff_r4 + 0xfe8),0);
  *(int *)(unaff_r4 + 0xfec) = iVar4;
  uVar1 = uRam001a7b54;
  *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 0x83;
  iVar4 = *(int *)(unaff_r4 + 0xfec);
  *(undefined4 *)(iVar4 + 0x100) = uVar1;
  uVar2 = uRam001a7b58;
  *(undefined4 *)(iVar4 + 0x104) = uVar1;
  *(undefined4 *)(iVar4 + 0x108) = uVar1;
  *(undefined4 *)(iVar4 + 0x10c) = unaff_s16;
  iVar4 = *(int *)(unaff_r4 + 0xfec);
  *(undefined4 *)(iVar4 + 0xf0) = uVar2;
  *(undefined4 *)(iVar4 + 0xf4) = uVar2;
  *(undefined4 *)(iVar4 + 0xf8) = uVar2;
  *(undefined4 *)(iVar4 + 0xfc) = unaff_s16;
  *(undefined1 *)(unaff_r6 + 0x19b) = 4;
  puVar3 = puRam001a7c54;
  *(undefined2 *)(puRam001a7c54 + 8) = 0;
  *puVar3 = 0;
  return;
}
