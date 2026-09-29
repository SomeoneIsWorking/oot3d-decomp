// OoT3D decomp @ 00259b38  name=FUN_00259b38  size=56

void FUN_00259b38(undefined4 *param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  char in_OV;

  *(short *)param_1 = (short)param_1;
  *param_1 = param_1[0x10];
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r7;
  *(short *)param_1 = (short)param_1;
  param_1[3] = param_1[0x10];
  param_1[4] = unaff_r5;
  param_1[5] = unaff_r7;
  if (in_OV != '\0') {
    uVar2 = *(ushort *)((int)param_1 + 0x45);
    iVar3 = *(int *)((int)param_1 + -7) >> 0xe;
    *(int *)iVar3 = iVar3;
    *(uint *)(iVar3 + 4) = (uint)uVar2;
    *(undefined4 *)(iVar3 + 8) = unaff_r5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x14,0x25a6f4);
  (*pcVar1)();
}
