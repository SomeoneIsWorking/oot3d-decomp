// OoT3D decomp @ 003920ac  name=FUN_003920ac  size=216

void FUN_003920ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;

  iVar3 = *(int *)(param_2 + 0x20ac);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  fVar6 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x30) - *(float *)(param_1 + 0x30);
  bVar4 = fVar6 == *DAT_00392184;
  bVar5 = *DAT_00392184 <= fVar6;
  if (!bVar5 || bVar4) {
    fVar6 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x2c);
    bVar4 = *(float *)(param_1 + 0x2c) == fVar6;
    bVar5 = fVar6 <= *(float *)(param_1 + 0x2c);
  }
  if ((((!bVar5 || bVar4) && (iVar1 = FUN_0037577c(param_2), iVar1 == 0)) &&
      ((*(uint *)(DAT_00392188 + iVar3) & DAT_0039218c) == 0)) &&
     ((*(ushort *)(iVar3 + 0x90) & 1) != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    uVar2 = FUN_00375750(*(undefined4 *)(param_1 + 0x9e0),0);
    FUN_0037573c(param_2,uVar2);
    uVar2 = DAT_00392194;
    *(uint *)(iVar3 + 0x29b8) = *(uint *)(iVar3 + 0x29b8) | 0x400;
    *(undefined1 *)(DAT_00392190 + 0x5a2) = 1;
    *(undefined4 *)(iVar3 + 0x221c) = uVar2;
    *(undefined4 *)(param_1 + 0xbbc) = 8;
  }
  return;
}
