// OoT3D decomp @ 0011b6f8  name=FUN_0011b6f8  size=520

void FUN_0011b6f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;

  FUN_003731e0(param_1 + 0x1a8);
  uVar1 = DAT_0011b9a4;
  FUN_0036fc20(param_1 + 0xb88);
  uVar3 = DAT_0011b9ac;
  uVar2 = DAT_0011b9a8;
  if (*(short *)(param_1 + 0xaee) == 0) {
    *(undefined1 *)(param_1 + 0xacc) = 1;
    iVar5 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar1,param_1 + 0x1a8);
    if (iVar5 != 0) {
      *(undefined2 *)(param_1 + 0xaee) = 1;
      FUN_00370350(uVar2,param_1 + 0x1a8,0x1a);
    }
    if (*(int *)(param_1 + 0x1e4) <= DAT_0011b9cc) {
      *(undefined2 *)(DAT_0011b9d0 + param_1) = 2;
      *(undefined1 *)(param_1 + 0xff4) = 2;
      puVar4 = DAT_0011b9d4;
      uVar6 = *(undefined4 *)(param_1 + 0xb98);
      uVar7 = *(undefined4 *)(param_1 + 0xb9c);
      *DAT_0011b9d4 = *(undefined4 *)(param_1 + 0xb94);
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
    }
    iVar5 = FUN_003736fc(DAT_0011b9d8,uVar1,param_1 + 0x1a8);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0xb88) = uVar2;
    }
    iVar5 = FUN_003736fc(DAT_0011b9dc,uVar1,param_1 + 0x1a8);
    uVar6 = DAT_0011b9e0;
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0xb90) = 1;
      FUN_00375bcc(param_1,uVar6);
      FUN_00375bcc(param_1,DAT_0011b9e4);
      FUN_0036aa20(*(undefined4 *)(param_1 + 0xb94),*(undefined4 *)(param_1 + 0xb98),
                   *(undefined4 *)(param_1 + 0xb9c),param_2 + 0x208c,param_1,param_2,0xe8,0,0,0,100)
      ;
    }
  }
  else if ((*(short *)(param_1 + 0xaee) == 1) && (*(char *)(param_1 + 0xaec) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,2000);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  FUN_0036e168(uVar2,uVar1,uVar3,uVar2,param_1 + 0x60);
  FUN_0036e168(uVar2,uVar1,uVar3,uVar2,param_1 + 0x68);
  fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * (short)DAT_0011b9c4));
  fVar8 = fVar8 * DAT_0011b9c8;
  *(float *)(param_1 + 100) = fVar8;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar8;
  return;
}
