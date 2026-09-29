// OoT3D decomp @ 0047c944  name=FUN_0047c944  size=260

void FUN_0047c944(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  uVar5 = DAT_0047ca58;
  fVar4 = DAT_0047ca54;
  fVar3 = DAT_0047ca50;
  fVar2 = DAT_0047ca4c;
  fVar1 = DAT_0047ca48;
  for (piVar7 = *(int **)(param_1 + 0xa70); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    if (1 < *(byte *)*piVar7) {
      iVar6 = *piVar7;
      local_38 = *(undefined4 *)(iVar6 + 4);
      local_34 = *(undefined4 *)(iVar6 + 8);
      local_30 = *(undefined4 *)(iVar6 + 0xc);
      FUN_00368cc0(param_1,&local_38,&local_44,&local_48);
      *(undefined1 *)(iVar6 + 0x13) = 0;
      if ((((fVar1 <= local_3c) &&
           (iVar8 = (int)(fVar4 + local_40 * local_48 * fVar3),
           (int)(fVar2 + local_44 * local_48 * fVar2) + 0x13U < uVar5)) && (-0xa0 < iVar8)) &&
         ((iVar8 < 400 && (*(short *)(iVar6 + 0x14) != 0)))) {
        *(undefined1 *)(iVar6 + 0x13) = 1;
      }
    }
  }
  return;
}
