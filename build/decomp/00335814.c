// OoT3D decomp @ 00335814  name=FUN_00335814  size=232

void FUN_00335814(float param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x14;
  while (((char)param_2[0xd] != '\0' || (*param_2 == 0))) {
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 0x13;
    if (0x6d < iVar3) {
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xd) = 1;
  uVar2 = uRam00335900;
  fVar1 = fRam003358fc;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  param_2[4] = *param_3;
  param_2[5] = iVar3;
  param_2[6] = iVar4;
  iVar3 = param_4[1];
  iVar4 = param_4[2];
  param_2[7] = *param_4;
  param_2[8] = iVar3;
  param_2[9] = iVar4;
  iVar3 = param_5[1];
  iVar4 = param_5[2];
  param_2[10] = *param_5;
  param_2[0xb] = iVar3;
  param_2[0xc] = iVar4;
  param_2[1] = (int)(param_1 * fVar1);
  iVar3 = func_0x00371e50(uVar2);
  param_2[2] = iVar3;
  iVar3 = func_0x00371e50(uVar2);
  param_2[3] = iVar3;
  iVar3 = 0;
  do {
    func_0x0036932c(*param_2,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  func_0x0037266c(*param_2,3);
  *(undefined2 *)((int)param_2 + 0x36) = 0xff;
  *(undefined1 *)((int)param_2 + 0x3e) = 0xff;
  *(undefined1 *)((int)param_2 + 0x3d) = 0xff;
  *(undefined1 *)(param_2 + 0xf) = 0xff;
  *(undefined1 *)((int)param_2 + 0x43) = 0;
  return;
}

