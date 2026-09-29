// OoT3D decomp @ 002b1180  name=FUN_002b1180  size=320

void FUN_002b1180(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  float fVar4;

  uVar1 = DAT_002b12c0;
  *(short *)(param_1 + 0x650) = *(short *)(param_1 + 0x650) + 1;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_0037322c();
  iVar2 = DAT_002b12c4;
  sVar3 = *(short *)(param_1 + 0x65c);
  if (sVar3 == 0) {
    sVar3 = 0x200;
  }
  else {
    if (sVar3 == 1) {
      sVar3 = *(short *)(param_1 + 0x658);
      if (sVar3 < 0xa9) {
        *(undefined2 *)(param_1 + 0x658) = 0;
        *(undefined2 *)(param_1 + 0x65a) = 0x1e;
        *(undefined2 *)(param_1 + 0x65c) = 2;
        goto LAB_002b1288;
      }
    }
    else {
      if (sVar3 != 2) {
        if ((*(short *)(param_1 + 0x65a) == 0) &&
           (sVar3 = *(short *)(param_1 + 0x658) + 0xa9, *(short *)(param_1 + 0x658) = sVar3,
           iVar2 < sVar3)) {
          *(undefined2 *)(param_1 + 0x658) = 0;
          fVar4 = (float)FUN_00371e50(DAT_002b12c8);
          *(short *)(param_1 + 0x65a) = (short)(int)fVar4 + 0x14;
        }
        FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x63c,param_1 + 0x648
                     ,0x4300);
        goto LAB_002b1288;
      }
      if ((*(short *)(param_1 + 0x65a) != 0) || (sVar3 = *(short *)(param_1 + 0x658), sVar3 < 0xa9))
      goto LAB_002b1288;
    }
    sVar3 = sVar3 + -0xa9;
  }
  *(short *)(param_1 + 0x658) = sVar3;
LAB_002b1288:
  if (*(short *)(param_1 + 0x64e) != 0) {
    *(short *)(param_1 + 0x64e) = *(short *)(param_1 + 0x64e) + -1;
  }
  if (*(short *)(param_1 + 0x65a) != 0) {
    *(short *)(param_1 + 0x65a) = *(short *)(param_1 + 0x65a) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x002b12bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x638))(param_1,param_2);
  return;
}
