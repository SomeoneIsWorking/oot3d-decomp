// OoT3D decomp @ 002731b8  name=FUN_002731b8  size=244

void FUN_002731b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;

  iVar4 = *(int *)(DAT_002732ac + param_2);
  uVar3 = *(uint *)(iVar4 + 0x1714);
  if ((uVar3 & 0x1000000) == 0) {
    fVar6 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(iVar4 + 0x30) - *(float *)(param_1 + 0x30);
    if ((int)(fVar6 * fVar6 + fVar5 * fVar5) <= DAT_002732bc) {
      if (DAT_002732c0 <= *(float *)(iVar4 + 0x2c) - *(float *)(param_1 + 0x2c)) {
        *(uint *)(iVar4 + 0x1714) = uVar3 | 0x800000;
      }
      return;
    }
  }
  else {
    *(uint *)(iVar4 + 0x1714) = uVar3 | 0x2000000;
    FUN_0032e1f0(4);
    FUN_00375a18(iVar4 + 0xbe,(int)*(short *)(param_1 + 0x36),5,2000,0);
    iVar1 = DAT_002732b0;
    *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(iVar4 + 0xbe);
    *(undefined2 *)(iVar1 + iVar4) = *(undefined2 *)(iVar4 + 0xbe);
    FUN_0032c570(1);
    FUN_0032c560(0);
    FUN_0032c550(1);
    FUN_0032c540(0);
    uVar2 = DAT_002732b4;
    *(int *)(iVar4 + 0x1740) = param_1;
    FUN_00367c7c(param_2,uVar2,param_1);
    *(undefined4 *)(param_1 + 0x9ac) = DAT_002732b8;
  }
  return;
}
