// OoT3D decomp @ 0024ff44  name=FUN_0024ff44  size=560

void FUN_0024ff44(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;

  if ((int)*(float *)(param_1 + 0x1e0) == 5) {
    FUN_0034f724(param_2);
  }
  iVar3 = FUN_00373bc0(param_2,param_1 + 0x850);
  if (iVar3 != 0) {
    *(undefined2 *)(param_1 + 0x1c) = 5;
  }
  uVar5 = uRam00250178;
  fVar2 = fRam00250174;
  if ((*(short *)(param_1 + 0x1c) < 1) && (-4 < *(short *)(param_1 + 0x1c))) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x840);
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f | 1;
    *(undefined1 *)(param_1 + 0x840) = 1;
    uVar4 = uRam0025018c;
    *(char *)(param_1 + 0x842) = *(char *)(param_1 + 0x842) + '\x01';
    FUN_00375bcc(param_1,uVar4);
LAB_0025009c:
    *(short *)(param_1 + 0x84e) = *(short *)(param_1 + 0x84e) + 0x26f;
    FUN_0036e168(uRam00250194,uVar5,uRam00250190,fVar2,param_1 + 0x924);
    fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x84e));
    *(float *)(param_1 + 0x928) = fVar7 * fRam00250198;
    fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x84e));
    uVar4 = uRam002501a4;
    uVar5 = uRam002501a0;
    uVar8 = VectorSignedToFloat((int)(short)(int)(fVar7 * fRam0025019c),(byte)(in_fpscr >> 0x15) & 3
                               );
    *(undefined4 *)(param_1 + 0x92c) = uVar8;
    FUN_003327a4(*(undefined4 *)(param_1 + 0x924),uVar4,uVar5,param_2,param_1,param_1 + 0x28,4);
    if (*(float *)(param_1 + 0xc4) == fVar2) {
      *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
      *(undefined1 *)(param_1 + 0x842) = 0;
    }
    else if (0x12c0 < *(short *)(param_1 + 0x84e)) {
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + fRam002501a8;
    }
  }
  else {
    if (cVar1 == '\x01') goto LAB_0025009c;
    if (cVar1 == '\x02') {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,3);
      fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar5,fVar2,fVar7 - fRam0025017c,uRam00250180,param_1 + 0x1a4,3,0);
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      *(undefined1 *)(param_1 + 0x84b) = 3;
      *(short *)(param_1 + 0x84c) = (short)uRam00250184;
      *(undefined4 *)(param_1 + 0x844) = uRam00250188;
    }
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,2000,0);
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x1c) == 5) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x20ac);
  uVar6 = *(uint *)(*(int *)(DAT_00330368 + param_2) + 0x1710);
  if (((*(ushort *)(iVar3 + 0x90) & 1) == 0 && (uVar6 & 0x8a00000) == 0) &&
     (((uVar6 & 0xc0000) != 0 ||
      (DAT_0033036c <= (int)(*(float *)(iVar3 + 0x2c) - *(float *)(iVar3 + 0x84)))))) {
    if ((uVar6 & 0x2c0000) != 0) goto LAB_00330314;
    uVar6 = uVar6 | 0x80000;
  }
  else {
    uVar6 = uVar6 & 0xbff07fff;
  }
  *(uint *)(*(int *)(DAT_00330368 + param_2) + 0x1710) = uVar6;
LAB_00330314:
  *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) & 0xffffdfff;
  *(int *)(iVar3 + 0x16f8) = param_1;
  *(int *)(iVar3 + 0x1718) = param_1;
  *(uint *)(iVar3 + 0x1710) = *(uint *)(iVar3 + 0x1710) | 0x10000;
  uVar5 = FUN_0036c5bc(param_2,0);
  FUN_003521f0(uVar5,8,param_1);
  uVar5 = FUN_0036c5bc(param_2,0);
  FUN_00332284(uVar5,2);
  return;
}
