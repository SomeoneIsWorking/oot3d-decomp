// OoT3D decomp @ 001587b0  name=FUN_001587b0  size=454

/* WARNING: Control flow encountered bad instruction data */

void FUN_001587b0(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  undefined2 uVar8;
  int unaff_pc;
  bool bVar9;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  int iVar10;

  uVar4 = DAT_00158988;
  iVar10 = *(int *)(param_1 + 0x1f8);
  if ((DAT_00158984 < iVar10) && (iVar10 < DAT_0015898c)) {
    bVar9 = false;
    if (*(float *)(param_1 + 0x28) == *(float *)(param_1 + 0x468)) {
      bVar9 = *(float *)(param_1 + 0x30) == *(float *)(param_1 + 0x470);
    }
    if (bVar9) {
      sVar1 = *(short *)(param_1 + 0x16);
      sVar2 = *(short *)(param_1 + 0x36);
      if (sVar2 != sVar1) {
        sVar7 = FUN_00368d94((int)(short)(sVar1 - sVar2),1);
        if (sVar7 == 0) {
          if ((short)(sVar1 - sVar2) == 0) {
            *(short *)(param_1 + 0x36) = sVar1;
          }
        }
        else {
          if (sVar7 < 0x1f41) {
            if (param_1 != 0xff) {
              coprocessor_load(0,in_cr3,unaff_pc + 4);
              coprocessor_function(10,0xb,1,in_cr0,in_cr0,in_cr8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0x11,0x1591f2);
              (*pcVar3)();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 0x36) = sVar2 + 8000;
        }
      }
    }
    uVar5 = DAT_00158994;
    *(undefined2 *)(param_1 + 0x452) = 2;
    *(undefined4 *)(param_1 + 100) = uVar5;
  }
  else if (DAT_00158998 < iVar10) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1f8) = DAT_0015899c;
    }
    else {
      *(undefined2 *)(param_1 + 0x452) = 1;
      if (*(short *)(param_1 + 0x462) == 0) {
        FUN_0035a534(param_1,param_2,1);
        if (*(short *)(param_1 + 0x460) == 0) {
          *(undefined2 *)(param_1 + 0x460) = 1;
          uVar8 = 2;
        }
        else {
          uVar8 = 1;
          *(undefined2 *)(param_1 + 0x460) = 0;
        }
        *(undefined2 *)(param_1 + 0x462) = uVar8;
      }
      else {
        FUN_0035a534(param_1,param_2,0);
      }
      if (*(short *)(param_1 + 0x16) == *(short *)(param_1 + 0x36)) {
        *(undefined2 *)(param_1 + 0x452) = 0;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  uVar6 = DAT_001589a4;
  uVar5 = DAT_001589a0;
  if (*(short *)(param_1 + 0x452) == 2) {
    FUN_0036e168(*(undefined4 *)(param_1 + 0x468),DAT_001589a4,DAT_001589a0,uVar4,param_1 + 0x28);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x470),uVar6,uVar5,uVar4,param_1 + 0x30);
  }
  FUN_003731e0(param_1 + 0x1bc);
  if (*(short *)(param_1 + 0x452) == 0) {
    FUN_00180724(param_1);
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
