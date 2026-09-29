// OoT3D decomp @ 00435250  name=FUN_00435250  size=148

void FUN_00435250(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  FUN_0032b184(DAT_004352e4,0x22);
  iVar3 = DAT_004352ec;
  uVar2 = DAT_004352e8;
  iVar1 = DAT_004352e4;
  iVar5 = 0;
  do {
    iVar4 = FUN_002faf2c();
    iVar6 = iVar1 + iVar5;
    *(undefined1 *)(iVar6 + 1) =
         *(undefined1 *)
          (iVar3 + (iVar4 >> 8) +
                   (uint)((ulonglong)uVar2 * (ulonglong)(uint)(iVar4 >> 8) + (ulonglong)uVar2 >>
                         0x26) * -0x54);
    iVar4 = FUN_002faf2c();
    iVar5 = iVar5 + 2;
    *(undefined1 *)(iVar6 + 2) =
         *(undefined1 *)
          (iVar3 + (iVar4 >> 8) +
                   (uint)((ulonglong)uVar2 * (ulonglong)(uint)(iVar4 >> 8) + (ulonglong)uVar2 >>
                         0x26) * -0x54);
  } while (iVar5 < 0x1e);
  return;
}
