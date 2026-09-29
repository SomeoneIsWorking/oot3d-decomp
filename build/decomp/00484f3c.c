// OoT3D decomp @ 00484f3c  name=FUN_00484f3c  size=172

void FUN_00484f3c(undefined4 param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;

  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 == *(int *)(param_3 + 8)) {
    FUN_002c5314(param_1,param_2,param_3,param_4,iVar1,0,param_5);
    return;
  }
  FUN_002c5314(param_1,(DAT_00484fe8 - *(float *)(param_3 + 0xc)) * param_2,param_3,param_4,iVar1,0,
               param_5);
  FUN_002c5314(param_1,*(float *)(param_3 + 0xc) * param_2,param_3,param_4,
               *(undefined4 *)(param_3 + 8),1,param_5);
  return;
}
