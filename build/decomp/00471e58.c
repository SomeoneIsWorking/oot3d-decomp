// OoT3D decomp @ 00471e58  name=FUN_00471e58  size=228

void FUN_00471e58(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  float fVar2;
  int iVar3;
  uint unaff_r4;
  bool bVar4;
  uint in_fpscr;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  fVar2 = DAT_00471f3c;
  bVar4 = *(int *)(param_2 + 0x3cc) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_2 + 6);
    unaff_r4 = 0;
  }
  if (bVar4 && cVar1 != '\0') {
    do {
      iVar3 = param_2 + unaff_r4 * 0x3c;
      if (*(int *)(iVar3 + 0xc) != 0) {
        local_3c = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
        local_3c = local_3c * fVar2;
        local_38 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
        local_38 = local_38 * fVar2;
        local_34 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
        local_34 = local_34 * fVar2;
        local_30 = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
        local_30 = local_30 * fVar2;
        iVar3 = FUN_003687a8(*(undefined4 *)(iVar3 + 0xc));
        *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
        *(undefined1 *)(iVar3 + 0x1b6) = 0;
        FUN_003589cc(iVar3,4);
        FUN_00358964(iVar3,4,&local_3c);
      }
      unaff_r4 = unaff_r4 + 1 & 0xff;
    } while (unaff_r4 < *(byte *)(param_2 + 6));
  }
  return;
}

