// OoT3D decomp @ 00185a60  name=FUN_00185a60  size=388

void FUN_00185a60(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  undefined2 uVar6;
  undefined1 *puVar7;
  int iVar8;

  uVar4 = DAT_00185c00;
  sVar2 = *(short *)(param_1 + 0x92);
  sVar3 = *(short *)(param_1 + 0x36);
  sVar1 = sVar2 - sVar3;
  sVar5 = sVar1;
  if (sVar1 < 0) {
    sVar5 = -sVar1;
  }
  if (*(short *)(param_1 + 0x454) == 0) {
    iVar8 = *(int *)(param_1 + 0x1f8);
    if ((DAT_00185be4 < iVar8) && (iVar8 < DAT_00185be8)) {
      if (sVar3 != sVar2) {
        sVar5 = FUN_00368d94((int)sVar1,1);
        puVar7 = (undefined1 *)(int)sVar5;
        if (puVar7 == (undefined1 *)0x0) {
          if (sVar1 == 0) {
            *(short *)(param_1 + 0x36) = sVar2;
          }
        }
        else {
          if ((int)puVar7 < 0x1f41) {
            if ((int)puVar7 < -8000) {
              puVar7 = DAT_00185bec;
            }
          }
          else {
            puVar7 = &DAT_00001f40;
          }
          *(short *)(param_1 + 0x36) = (short)puVar7 + sVar3;
        }
      }
      *(undefined4 *)(param_1 + 100) = DAT_00185bf0;
    }
    else if (DAT_00185bf4 < iVar8) {
      if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x1f8) = DAT_00185bf8;
      }
      else {
        if (sVar5 < DAT_00185bfc) {
          *(undefined2 *)(param_1 + 0x452) = 0;
        }
        *(undefined4 *)(param_1 + 100) = uVar4;
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x462) == 0) {
          FUN_0035a534(param_1,param_2,1);
          uVar6 = 1;
          if (*(short *)(param_1 + 0x460) == 0) {
            *(undefined2 *)(param_1 + 0x460) = 1;
            uVar6 = 2;
          }
          else {
            *(undefined2 *)(param_1 + 0x460) = 0;
          }
          *(undefined2 *)(param_1 + 0x462) = uVar6;
        }
        else {
          FUN_0035a534(param_1,param_2,0);
        }
      }
    }
    FUN_003731e0(param_1 + 0x1bc);
    if (*(short *)(param_1 + 0x452) == 0) {
      FUN_001814b8(param_1);
      FUN_00375bcc(param_1,DAT_00185c04);
    }
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  else {
    *(short *)(param_1 + 0x454) = *(short *)(param_1 + 0x454) + -1;
  }
  return;
}
