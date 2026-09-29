// OoT3D decomp @ 00336f54  name=FUN_00336f54  size=244

void FUN_00336f54(float param_1,float param_2,float param_3,float param_4,int *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  fVar1 = DAT_00337048;
  iVar2 = 0;
  if (0 < *(int *)(**(int **)(param_5[1] + 8) + 8)) {
    do {
      iVar4 = *(int *)(*param_5 + 0x10);
      FUN_00333abc(iVar4,iVar2,&local_3c);
      if (fVar1 <= param_1) {
        local_3c = local_3c * param_1;
      }
      if (fVar1 <= param_2) {
        local_38 = local_38 * param_2;
      }
      if (fVar1 <= param_3) {
        local_34 = local_34 * param_3;
      }
      if (fVar1 <= param_4) {
        local_30 = local_30 * param_4;
      }
      FUN_00333a38(iVar4,iVar2,&local_3c);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar2 * 0x124) = 1;
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(**(int **)(param_5[1] + 8) + 8));
  }
  return;
}
