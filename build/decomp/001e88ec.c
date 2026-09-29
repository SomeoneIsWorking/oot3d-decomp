// OoT3D decomp @ 001e88ec  name=FUN_001e88ec  size=438

void FUN_001e88ec(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;

  iVar6 = FUN_003758b0(*(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x30),
                       *(float *)(param_1 + 0x468) - *(float *)(param_1 + 0x28));
  uVar3 = DAT_001e8aa0;
  iVar8 = *(int *)(param_1 + 0x1f8);
  if ((DAT_001e8a9c < iVar8) && (iVar8 < DAT_001e8aa4)) {
    sVar1 = *(short *)(param_1 + 0x36);
    iVar8 = (int)(short)((short)iVar6 - sVar1);
    if (sVar1 != iVar6) {
      sVar5 = FUN_00368d94(iVar8,1);
      puVar7 = (undefined1 *)(int)sVar5;
      if (puVar7 == (undefined1 *)0x0) {
        if (iVar8 == 0) {
          *(short *)(param_1 + 0x36) = (short)iVar6;
        }
      }
      else {
        if ((int)puVar7 < 0x1f41) {
          if ((int)puVar7 < -8000) {
            puVar7 = DAT_001e8aa8;
          }
        }
        else {
          puVar7 = &DAT_00001f40;
        }
        *(short *)(param_1 + 0x36) = sVar1 + (short)puVar7;
      }
    }
    *(undefined4 *)(param_1 + 100) = DAT_001e8aac;
  }
  else if (DAT_001e8ab0 < iVar8) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1f8) = DAT_001e8ab4;
    }
    else {
      if (*(short *)(param_1 + 0x462) == 0) {
        FUN_0035a534(param_1,param_2,1);
        uVar2 = (undefined2)(param_1 >> 0xe);
        *(undefined2 *)(iVar6 + 0x34) = uVar2;
        *(undefined2 *)(iVar6 + 0xe) = uVar2;
        return;
      }
      FUN_0035a534(param_1,param_2,0);
      if (*(short *)(param_1 + 0x36) == iVar6) {
        *(undefined2 *)(param_1 + 0x452) = 0;
      }
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  FUN_003731e0(param_1 + 0x1bc);
  if (*(short *)(param_1 + 0x452) == 0) {
    FUN_003660fc(DAT_001e8ab8,param_1 + 0x1bc,0);
    *(undefined4 *)(param_1 + 0x448) = 7;
    uVar4 = DAT_001e8abc;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined2 *)(param_1 + 0x452) = 1;
    *(undefined4 *)(param_1 + 0x44c) = uVar4;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
