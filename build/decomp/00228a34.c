// OoT3D decomp @ 00228a34  name=FUN_00228a34  size=620

void FUN_00228a34(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_64 [48];

  fVar7 = DAT_00228ca8;
  fVar6 = DAT_00228ca4;
  fVar2 = DAT_00228ca0;
  sVar1 = *(short *)(param_1 + 0x1bc);
  fVar8 = DAT_00228ca8;
  if (0x7f < sVar1) {
    iVar4 = *(int *)(param_1 + 0x1c4);
    FUN_00372224(auStack_64,param_1 + 0x148);
    iVar3 = FUN_003695f8();
    fVar8 = fVar7;
    if (iVar3 != 0) {
      fVar8 = fVar2;
    }
    if (iVar4 != 0) {
      iVar3 = FUN_003687a8(iVar4);
      FUN_0033e2a0(param_2,param_1,iVar3);
      FUN_0036879c(iVar3);
      FUN_00368704(*(undefined4 *)(param_2 + 0x5fc8),iVar3);
      *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
      *(undefined1 *)(iVar3 + 0x1b6) = 0;
      local_68 = (float)VectorSignedToFloat(sVar1 * 2 + -0xff,(byte)(in_fpscr >> 0x15) & 3);
      local_68 = local_68 * fVar6;
      local_74 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (fVar8 - local_68) * fVar6;
      local_74 = local_74 * fVar5;
      local_70 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
      local_70 = local_70 * fVar5;
      local_6c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
      local_6c = local_6c * fVar5;
      FUN_003589cc(iVar3,4);
      FUN_00358964(iVar3,4,&local_74);
      *(float *)(*(int *)(iVar4 + 0xc) + 0xc) = fVar7;
      *(undefined1 *)(iVar4 + 0xac) = 1;
      FUN_003721e0(iVar4,auStack_64);
      FUN_00372170(iVar4,0);
    }
    if (0x7f < *(short *)(param_1 + 0x1bc)) {
      return;
    }
  }
  sVar1 = *(short *)(param_1 + 0x1bc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  FUN_00372224(auStack_64,param_1 + 0x148);
  iVar3 = FUN_003695f8();
  fVar7 = fVar8;
  if (iVar3 != 0) {
    fVar7 = fVar2;
  }
  if (iVar4 != 0) {
    iVar3 = FUN_003687a8(iVar4);
    *(undefined1 *)(iVar3 + 0x1ba) = 0;
    FUN_0033e2a0(param_2,param_1,iVar3);
    FUN_0036879c(iVar3);
    FUN_00368704(*(undefined4 *)(param_2 + 0x5fc8),iVar3);
    *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
    *(undefined1 *)(iVar3 + 0x1b6) = 0;
    local_68 = (float)VectorSignedToFloat((0x7f - sVar1) * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    local_68 = local_68 * fVar6;
    local_74 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (fVar8 - local_68) * fVar6;
    local_74 = local_74 * fVar6;
    local_70 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_2 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
    local_70 = local_70 * fVar6;
    local_6c = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_2 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
    local_6c = local_6c * fVar6;
    FUN_003589cc(iVar3,4);
    FUN_00358964(iVar3,4,&local_74);
    *(float *)(*(int *)(iVar4 + 0xc) + 0xc) = fVar7;
    *(undefined1 *)(iVar4 + 0xac) = 1;
    FUN_003721e0(iVar4,auStack_64);
    FUN_00372170(iVar4,0);
  }
  return;
}
