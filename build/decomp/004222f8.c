// OoT3D decomp @ 004222f8  name=FUN_004222f8  size=312

undefined4 FUN_004222f8(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar2 = DAT_00422478;
  if (*(int *)(DAT_00422478 + 4) != 0) {
    iVar7 = FUN_0031b9c0(*(int *)(DAT_00422478 + 4),0);
    iVar5 = DAT_00422484;
    uVar4 = DAT_00422480;
    iVar3 = DAT_0042247c;
    if (iVar7 == 0) {
      return 0;
    }
    if (**(int **)(iVar2 + 4) < 0) {
      FUN_0032b184(DAT_0042247c,0x22);
      iVar7 = 0;
      do {
        iVar8 = FUN_002faf2c();
        iVar9 = iVar3 + iVar7;
        *(undefined1 *)(iVar9 + 1) =
             *(undefined1 *)
              (iVar5 + (iVar8 >> 8) +
                       (uint)((ulonglong)uVar4 * (ulonglong)(uint)(iVar8 >> 8) + (ulonglong)uVar4 >>
                             0x26) * -0x54);
        iVar8 = FUN_002faf2c();
        iVar7 = iVar7 + 2;
        *(undefined1 *)(iVar9 + 2) =
             *(undefined1 *)
              (iVar5 + (iVar8 >> 8) +
                       (uint)((ulonglong)uVar4 * (ulonglong)(uint)(iVar8 >> 8) + (ulonglong)uVar4 >>
                             0x26) * -0x54);
      } while (iVar7 < 0x1e);
    }
    else {
      sVar1 = *(short *)(DAT_0042247c + 0x20);
      *(undefined2 *)(DAT_0042247c + 0x20) = 0;
      sVar6 = FUN_002faf90(iVar3,0x22,0);
      *(short *)(iVar3 + 0x20) = sVar6;
      if (sVar6 != sVar1) {
        FUN_0032b184(iVar3,0x22);
        iVar7 = 0;
        do {
          iVar8 = FUN_002faf2c();
          iVar9 = iVar3 + iVar7;
          *(undefined1 *)(iVar9 + 1) =
               *(undefined1 *)
                (iVar5 + (iVar8 >> 8) +
                         (uint)((ulonglong)uVar4 * (ulonglong)(uint)(iVar8 >> 8) + (ulonglong)uVar4
                               >> 0x26) * -0x54);
          iVar8 = FUN_002faf2c();
          iVar7 = iVar7 + 2;
          *(undefined1 *)(iVar9 + 2) =
               *(undefined1 *)
                (iVar5 + (iVar8 >> 8) +
                         (uint)((ulonglong)uVar4 * (ulonglong)(uint)(iVar8 >> 8) + (ulonglong)uVar4
                               >> 0x26) * -0x54);
        } while (iVar7 < 0x1e);
      }
    }
    FUN_0031b99c(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return 1;
}
