// OoT3D decomp @ 00373aac  name=FUN_00373aac  size=200

void FUN_00373aac(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  bool in_ZR;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r4 + 0x178) = param_1;
  if (((*puRam00373bac & 1) == 0) && (iVar2 = func_0x003679b4(puRam00373bac), iVar2 != 0)) {
    func_0x0036788c(iRam00373bb0);
  }
  **(undefined4 **)(unaff_r4 + 0x178) = *(undefined4 *)(iRam00373bb0 + 0x174);
  *(undefined4 *)(unaff_r4 + 0x1a0) = uRam00373bbc;
  bVar1 = *(byte *)(unaff_r6 + 2);
  *(byte *)(unaff_r4 + 2) = bVar1;
  *(char *)(unaff_r7 + 8) = *(char *)(unaff_r7 + 8) + '\x01';
  iVar3 = unaff_r7 + (uint)bVar1 * 8;
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 300) = unaff_r4;
  }
  *(int *)(iVar3 + 0x10) = unaff_r4;
  *(int *)(unaff_r4 + 0x130) = iVar2;
  func_0x004a31c0();
  return;
}
