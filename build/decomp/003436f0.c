// OoT3D decomp @ 003436f0  name=FUN_003436f0  size=156

void FUN_003436f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;

  iVar3 = *(int *)(param_1 + *(short *)(DAT_0034378c + param_1) * 4 + 0xa54);
  FUN_0033885c(iVar3,0x21);
  FUN_00367c54(iVar3);
  puVar2 = (undefined4 *)(DAT_00343790 + param_2 * 0x20);
  *(undefined4 *)(iVar3 + 0x80) = *puVar2;
  *(undefined4 *)(iVar3 + 0x84) = puVar2[1];
  *(undefined4 *)(iVar3 + 0x88) = puVar2[2];
  *(undefined4 *)(iVar3 + 0xa4) = puVar2[3];
  *(undefined4 *)(iVar3 + 0xa8) = puVar2[4];
  *(undefined4 *)(iVar3 + 0xac) = puVar2[5];
  iVar1 = DAT_00343794;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar3 + 0xa4);
  *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar3 + 0xa8);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0xac);
  *(undefined2 *)(iVar1 + iVar3) = *(undefined2 *)(puVar2 + 6);
  uVar4 = VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x1a),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar3 + 0x144) = uVar4;
  *(undefined4 *)(iVar3 + 0xd0) = puVar2[7];
  return;
}
