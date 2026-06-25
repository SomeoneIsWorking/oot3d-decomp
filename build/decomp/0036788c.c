// OoT3D decomp @ 0036788c  name=FUN_0036788c  size=276

void FUN_0036788c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_004175d4();
  uVar1 = DAT_003679a4;
  *puVar2 = DAT_003679a0;
  puVar2[0x28] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x29] = uVar1;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  iVar3 = FUN_00418198(puVar2 + 0x41);
  uVar1 = DAT_003679ac;
  *(undefined4 *)(iVar3 + 0x60) = DAT_003679a8;
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  iVar3 = FUN_0041706c(iVar3 + 0x7c);
  iVar3 = FUN_0041749c(iVar3 + 0x2170);
  iVar3 = FUN_0041757c(iVar3 + 0xd8);
  *(undefined4 *)(DAT_003679b0 + iVar3 + -0x23c8) = 0;
  iVar3 = FUN_00417bf0(iVar3 + 0xb8);
  iVar3 = FUN_00417bcc(iVar3 + 0x170);
  iVar3 = FUN_0041a144(iVar3 + 0xcd0);
  iVar3 = FUN_00419dd8(iVar3 + 0xfd0);
  iVar3 = FUN_00418984(iVar3 + 0x1710);
  iVar3 = FUN_0041a334(iVar3 + 0x1938);
  iVar3 = FUN_00418880(iVar3 + 0x24);
  iVar3 = FUN_00313d58(iVar3 + 0x18);
  iVar3 = FUN_00313cec(iVar3 + 0xc);
  iVar3 = FUN_002c36a4(iVar3 + 0x38);
  iVar3 = FUN_00417838(iVar3 + 0x3c);
  iVar3 = FUN_00418694(iVar3 + 0xb4);
  *(undefined *)(iVar3 + 0xc04) = 0;
  *(undefined *)(iVar3 + 0xc05) = 0;
  return;
}

