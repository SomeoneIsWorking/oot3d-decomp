// OoT3D decomp @ 00316040  name=FUN_00316040  size=288

void FUN_00316040(int param_1,int param_2,uint param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined1 auStack_14 [4];

  local_18 = *(float *)(param_2 + 0x2c);
  iVar3 = FUN_0033eeb8(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30),param_1,
                       param_1 + 0xa98,&local_18,auStack_14);
  fVar1 = DAT_00316160;
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x88) = DAT_00316164;
    *(float *)(param_2 + 0x8c) = fVar1;
    *(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) & 0xff9f;
    return;
  }
  fVar4 = local_18 - *(float *)(param_2 + 0x2c);
  *(float *)(param_2 + 0x88) = fVar4;
  *(float *)(param_2 + 0x8c) = local_18;
  uVar2 = *(ushort *)(param_2 + 0x90);
  if (fVar4 < fVar1) {
    uVar2 = uVar2 & 0xff9f;
  }
  else {
    if (((uVar2 & 0x20) == 0) && (*(ushort *)(param_2 + 0x90) = uVar2 | 0x40, (param_3 & 0x40) == 0)
       ) {
      local_24 = *(undefined4 *)(param_2 + 0x28);
      local_20 = local_18;
      local_1c = *(undefined4 *)(param_2 + 0x30);
      FUN_00362068(param_1,&local_24,100,500,0);
      FUN_00362068(param_1,&local_24,100,500,4);
      FUN_00362068(param_1,&local_24,100,500,8);
    }
    uVar2 = *(ushort *)(param_2 + 0x90) | 0x20;
  }
  *(ushort *)(param_2 + 0x90) = uVar2;
  return;
}
