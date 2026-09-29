// OoT3D decomp @ 00386228  name=FUN_00386228  size=328

void FUN_00386228(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(iRam00386384 + param_2);
  if ((*(int *)(param_1 + 0xab0) == 3) &&
     ((int)*(float *)(param_1 + 0x1e0) == 6 || (int)*(float *)(param_1 + 0x1e0) == 0xf)) {
    FUN_00375bcc(param_1,uRam00386388,param_3,param_4,param_4);
  }
  FUN_0037632c(param_1);
  uVar2 = uRam00386390;
  fVar1 = fRam0038638c;
  if ((*(ushort *)(param_1 + 0xac4) & 4) != 0) {
    *(float *)(param_1 + 0xa98) = *(float *)(param_1 + 0xa98) + fRam0038638c;
    *(float *)(param_1 + 0xaa0) = *(float *)(param_1 + 0xaa0) + fVar1;
    *(undefined4 *)(param_1 + 0xa8c) = uVar2;
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xa4c);
  (**(code **)(param_1 + 0xa48))(param_1,param_2);
  uVar2 = uRam00386394;
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(iVar3 + 0x3c);
  *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(iVar3 + 0x44);
  if ((*(ushort *)(param_1 + 0xac4) & 0x100) == 0) {
    if ((*(ushort *)(param_1 + 0xac4) & 0x200) != 0) {
      *(short *)(param_1 + 0xafa) = (short)uVar2;
      *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 0x1000;
      FUN_0034c664(param_1,param_1 + 0xac8,0,4);
    }
  }
  else {
    *(short *)(param_1 + 0xafa) = (short)uVar2;
    *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 0x1000;
    FUN_0034c664(param_1,param_1 + 0xac8,0,2);
  }
  FUN_00375a18(param_1 + 0xaf4,(int)*(short *)(param_1 + 0xafa),1,uRam00386398,0);
  return;
}
