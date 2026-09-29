// OoT3D decomp @ 00390f98  name=FUN_00390f98  size=524

/* WARNING: Type propagation algorithm not settling */

void FUN_00390f98(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_34 [4];

  uVar2 = DAT_003911dc;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003911dc;
  FUN_0031d3c0();
  if ((*(short *)(*DAT_003911e0 + 0x5be) != 0) && (*(char *)(param_1 + 0x1b0) == '\0')) {
    *(undefined2 *)(*DAT_003911e0 + 0x5be) = 0;
    FUN_0033b11c(param_2 + 0x5bb4,(float *)(param_1 + 0x28),local_34 + 1,local_34);
    uVar3 = DAT_003911e8;
    if (DAT_003911e4 <= (int)ABS(local_34[0])) {
      fVar7 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x28);
      fVar5 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x2c);
      fVar6 = *(float *)(param_2 + 0x1c0) - *(float *)(param_1 + 0x30);
      iVar4 = FUN_0031d150(local_34[0],param_2,param_1,local_34 + 1);
      if ((iVar4 == 0) && (DAT_003911ec <= (int)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6))
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_34[0] = DAT_003911f0;
        FUN_0037547c(uVar3,param_1 + 0x28,4,DAT_003911f4,DAT_003911f4);
        uVar3 = DAT_003911f8;
        *(undefined2 *)(param_1 + 0xeb4) = 0;
        FUN_0031c588(uVar3,uVar2,param_1,7);
        goto LAB_00391158;
      }
    }
    iVar4 = FUN_003353dc(param_1,param_2);
    if (iVar4 != 0) {
      local_34[0] = DAT_003911f0;
      FUN_0037547c(uVar3,param_1 + 0x28,4,DAT_003911f4,DAT_003911f4);
      *(undefined2 *)(param_1 + 0xeb4) = 0;
      FUN_003352c8(param_1,param_2);
      FUN_003521f0(*(undefined4 *)(param_2 + 0xa54),8,param_1);
      FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x38);
      local_34[0] = 0.0;
      local_34[1] = 0.0;
      FUN_003353a4(*(undefined4 *)(param_2 + 0xa54),4,0,0,0x51);
    }
  }
LAB_00391158:
  iVar4 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
