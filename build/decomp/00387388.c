// OoT3D decomp @ 00387388  name=FUN_00387388  size=456

void FUN_00387388(int param_1,int param_2)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  fVar5 = DAT_00387554;
  if (*(int *)(param_1 + 0x8f4) == DAT_00387550) {
    FUN_0036f410(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x920,*(undefined1 *)(param_1 + 0x904),
                 *(undefined1 *)(param_1 + 0x905),*(undefined1 *)(param_1 + 0x906),200,0);
    fVar2 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x904),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x905),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x906),(byte)(in_fpscr >> 0x15) & 3);
    local_1c = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x907),(byte)(in_fpscr >> 0x15) & 3);
    local_1c = local_1c * fVar5;
    local_28 = fVar2 * fVar5 * local_1c;
    local_24 = fVar3 * fVar5 * local_1c;
    local_20 = fVar4 * fVar5 * local_1c;
    FUN_00358778(*(undefined4 *)(param_1 + 0x8a8),0,4,&local_28,0);
    FUN_00358778(*(undefined4 *)(param_1 + 0x8a8),1,4,&local_28,0);
    *(undefined1 *)(*(int *)(param_1 + 0x8a8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x8a8),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x8a8),0);
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00342be0(DAT_00387558,DAT_00387558,DAT_00387558,fVar5 * DAT_00387554,param_1,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x178) + 0x1ba) = 0;
    sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_0038755c + param_2) * 4 + 0xa54));
    fVar5 = (float)VectorSignedToFloat((int)(short)(sVar1 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar5 * DAT_00387560,param_1 + 0x148,1);
    *(undefined1 *)(*(int *)(param_1 + 0x8ac) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x8ac),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x8ac),0);
  }
  FUN_0032c8e0(param_1,param_2);
  return;
}
