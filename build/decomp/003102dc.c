// OoT3D decomp @ 003102dc  name=FUN_003102dc  size=196

void FUN_003102dc(int *param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  
  if (((param_2 != 0) && (*(char *)((int)param_1 + 0x8a) == '\x02')) &&
     (*(char *)((int)param_1 + 0x8b) != '\x02')) {
    fVar2 = (float)FUN_0030b44c(param_1 + 0x19);
    iVar1 = DAT_003103a0;
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = FUN_0030b44c(param_1 + 0x19);
    param_1[0x19] = iVar3;
    param_1[0x1a] = iVar1;
    param_1[0x1b] = (int)(fVar2 * fVar4);
    param_1[0x1c] = 0;
    *(undefined *)(param_1 + 0x26) = 0;
    if (param_1[4] != 0) {
      FUN_0030c9e4(param_1[4],param_1);
    }
    (**(code **)(*param_1 + 0x24))(param_1);
    *(undefined *)((int)param_1 + 0x87) = 0;
    *(undefined *)((int)param_1 + 0x8b) = 0;
    *(undefined *)(param_1 + 0x23) = 0;
    *(undefined *)(param_1 + 0x22) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

