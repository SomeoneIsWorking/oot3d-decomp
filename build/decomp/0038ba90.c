// OoT3D decomp @ 0038ba90  name=FUN_0038ba90  size=284

void FUN_0038ba90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined1 auStack_4c [48];

  FUN_00372224(auStack_4c,param_1 + 0x148);
  uVar2 = DAT_0038bbb0;
  fVar5 = DAT_0038bbac;
  if ((*(ushort *)(param_1 + 0x1a4) & 1) == 0) {
    if (*(int *)(param_1 + 0x1b0) != 0) {
      fVar5 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(DAT_0038bbb0,DAT_0038bbb0,DAT_0038bbb0,fVar5 * DAT_0038bbac,
                   *(int *)(param_1 + 0x1b0),0,4);
      *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1b0),auStack_4c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),1);
      return;
    }
  }
  else {
    iVar3 = FUN_003695f8();
    uVar1 = uVar2;
    if (iVar3 != 0) {
      uVar1 = DAT_0038bbb4;
    }
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(uVar2,DAT_0038bbb4,DAT_0038bbb4,fVar4 * fVar5,*(undefined4 *)(param_1 + 0x1ac),0,4)
    ;
    if (*(int *)(param_1 + 0x1ac) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0xc) = uVar1;
      *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),auStack_4c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),1);
    }
  }
  return;
}
